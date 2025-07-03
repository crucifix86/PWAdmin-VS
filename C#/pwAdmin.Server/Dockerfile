# Build stage - requires .NET SDK
FROM mcr.microsoft.com/dotnet/sdk:8.0 AS build
WORKDIR /src

# Copy project files
COPY pwAdmin.Server.csproj .
RUN dotnet restore

# Copy source code
COPY . .

# Build self-contained executable
RUN dotnet publish -c Release \
    -r linux-x64 \
    --self-contained true \
    -p:PublishSingleFile=true \
    -p:PublishTrimmed=true \
    -p:PublishReadyToRun=true \
    -p:IncludeNativeLibrariesForSelfExtract=true \
    -p:EnableCompressionInSingleFile=true \
    -p:DebugType=none \
    -o /app/publish

# Runtime stage - minimal base image, no .NET runtime needed!
FROM ubuntu:22.04 AS runtime
WORKDIR /app

# Install only essential libraries
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ca-certificates \
        libicu70 \
        libssl3 && \
    rm -rf /var/lib/apt/lists/*

# Copy the self-contained binary
COPY --from=build /app/publish/pwadmin-server .
RUN chmod +x pwadmin-server

# Copy configuration files
COPY pwadmin.conf /etc/pwadmin.conf
COPY processes_config.ini /etc/processes_config.ini

# Create non-root user
RUN useradd -r -s /bin/false pwserver && \
    chown -R pwserver:pwserver /app

USER pwserver

# Expose port
EXPOSE 630

# Health check
HEALTHCHECK --interval=30s --timeout=3s --start-period=5s --retries=3 \
    CMD ./pwadmin-server status || exit 1

# Run the daemon
ENTRYPOINT ["./pwadmin-server"]
CMD ["start"]
// /Script/Icarus.DedicatedServerSettings
// Derives from: UDeveloperSettings > UObject
// size 0xC0, declared in Icarus/Source/Icarus/DedicatedServer/DedicatedServerSettings.h

UCLASS(Config=ServerSettings)
class UDedicatedServerSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FString SessionName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FString JoinPassword;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) int32 MaxPlayers;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) float ShutdownIfNotJoinedFor;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) float ShutdownIfEmptyFor;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) FString AdminPassword;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) FString LoadProspect;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FString CreateProspect;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) bool ResumeProspect;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, Config) FString LastProspectName;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, Config) bool AllowNonAdminsToLaunchProspects;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, Config) bool AllowNonAdminsToDeleteProspects;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, Config) bool FiberFoliageRespawn;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, Config) bool LargeStonesRespawn;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere, Config) float GameSaveFrequency;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, Config) bool SaveGameOnExit;  // 0x00B8, size 0x1
};

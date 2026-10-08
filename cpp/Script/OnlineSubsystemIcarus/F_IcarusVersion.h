// /Script/OnlineSubsystemIcarus.IcarusVersion
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/OnlineSubsystemIcarusFunctionLibrary.generated.h

USTRUCT()
struct FIcarusVersion
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusBuildVersion Version;  // 0x0008, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBackendSchemaVersion BackendSchema;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusDataVersion Data;  // 0x0034, size 0x4
};

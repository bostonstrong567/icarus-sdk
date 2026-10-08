// /Script/Icarus.VersionSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x70, declared in Icarus/Source/Icarus/Subsystems/GameInstance/VersionSubsystem.h

UCLASS()
class UVersionSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY() FIcarusGameVersion IcarusVersion;  // 0x0030, size 0x30
    UPROPERTY() FIcarusBackendVersion BackendVersion;  // 0x0060, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) FIcarusBackendVersion GetBackendVersion() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFormattedVersion(EIcarusGameVersionFlags VersionMask) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FString GetFormattedVersionString(const FIcarusGameVersion& Version, EIcarusGameVersionFlags VersionMask);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) FIcarusGameVersion GetIcarusVersion() const;  // parameters 0x30
};

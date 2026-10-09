// /Script/Icarus.FlagInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Flags/FlagInterface.h

UCLASS(Abstract)
class UFlagInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAllFlags(const TArray<FFlagsMultiRowHandle>& Flags) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnyFlags(const TArray<FFlagsMultiRowHandle>& Flags) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasFlag(const FFlagsMultiRowHandle& Flag) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) void SetFlag(const FFlagsMultiRowHandle& Flag, bool bSet) const;  // parameters 0x19
};

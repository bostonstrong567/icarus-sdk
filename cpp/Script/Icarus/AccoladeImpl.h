// /Script/Icarus.AccoladeImpl
// Derives from: UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Accolades/AccoladeImpl.h

UCLASS()
class UAccoladeImpl : public UObject
{
public:
    UFUNCTION(BlueprintNativeEvent) int32 GetAccoladeMaxProgressValue(UWorld* WorldContext, FAccoladesRowHandle Accolade);  // parameters 0x24
    UFUNCTION(BlueprintNativeEvent) bool GetAccoladeProgress(UWorld* WorldContext, FAccoladesRowHandle Accolade, int32& OutProgress);  // parameters 0x25
    UFUNCTION(BlueprintNativeEvent) bool RunAccolade(UWorld* WorldContext, FAccoladesRowHandle Accolade);  // parameters 0x21
    UFUNCTION(BlueprintNativeEvent) bool ShouldRunAccoladeOnStartup(UWorld* WorldContext, FAccoladesRowHandle Accolade);  // parameters 0x21

    // Virtual functions that start here:
    //   GetAccoladeMaxProgressValue_Implementation, GetAccoladeProgress_Implementation
    //   RunAccolade_Implementation, ShouldRunAccoladeOnStartup_Implementation
};

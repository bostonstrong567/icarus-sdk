// /Script/Icarus.RadBossSpire
// Derives from: AActor > UObject
// size 0x220, declared in Icarus/Source/Icarus/AI/Bosses/RadBossSpire.h

UCLASS(Config=Engine)
class ARadBossSpire : public AActor
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetBestIndexForTargetLocation(AActor* TargetActor);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetDirectionToTargetFromIndex(AActor* TargetActor, const int32& CurrentIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsTargetWithinIndexFieldOfView(AActor* TargetActor, const int32& CurrentIndex, bool bIncludeBuffer);  // parameters 0xE
};

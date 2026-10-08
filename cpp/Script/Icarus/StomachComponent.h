// /Script/Icarus.StomachComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Systems/Food/StomachComponent.h

UCLASS(Config=Engine)
class UStomachComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FStomachContent> StomachContents;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FStomachContentsUpdated StomachContentsUpdated;  // 0x00C0, size 0x1

    UFUNCTION() void FoodModifierRemoved(UModifierStateComponent* Component, bool bRemoved);  // parameters 0x9
    UFUNCTION(BlueprintCallable) TArray<FBarSegment> GetStomachBarSegments();  // parameters 0x10
    UFUNCTION() void OnRep_StomachContents();
};

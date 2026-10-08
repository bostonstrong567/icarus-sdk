// /Game/BP/Objects/World/Items/Deployables/Ladders/BP_LadderComponent.BP_LadderComponent_C
// Derives from: ULadderComponent > UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_LadderComponent_C : public ULadderComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FTransform GetLadderEnd();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FTransform GetLadderStart();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) ULadderComponent* GetOutermostLadder();  // parameters 0x8
};

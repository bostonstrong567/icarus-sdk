// /Game/Prototypes/InteractionSystem/BP_InteractionComponentBase.BP_InteractionComponentBase_C
// Derives from: UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_InteractionComponentBase_C : public UActorComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentInteraction(ABP_InteractionSceneBase_C*& CurrentInteraction);  // parameters 0x8
};

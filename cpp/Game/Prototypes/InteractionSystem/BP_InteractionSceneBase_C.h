// /Game/Prototypes/InteractionSystem/BP_InteractionSceneBase.BP_InteractionSceneBase_C
// Derives from: AActor > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InteractionSceneBase_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInteractionBlendSpeed(float& BlendSpeed);  // parameters 0x4
};

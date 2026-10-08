// /Game/BP/AI/GOAP/Misc/BP_FlammableArea.BP_FlammableArea_C
// Derives from: AGameplayTagActor > AActor > UObject
// size 0x274, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FlammableArea_C : public AGameplayTagActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_ActiveCombustion_C* BP_Flammable_ActiveCombustion;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* FireSettingCapsule;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultLifeSpan;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceNearbyActorIgnition;  // 0x026C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyIgnitionRadius;  // 0x0270, size 0x4

    UFUNCTION(BlueprintCallable) void CleanupVFX();
    UFUNCTION() void ExecuteUbergraph_BP_FlammableArea(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

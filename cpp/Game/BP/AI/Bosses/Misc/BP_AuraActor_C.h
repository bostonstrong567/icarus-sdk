// /Game/BP/AI/Bosses/Misc/BP_AuraActor.BP_AuraActor_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AuraActor_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DebugRadius;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierToApply;  // 0x02E0, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_AuraActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};

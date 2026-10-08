// /Game/BP/Objects/World/Items/WorldObjects/DialogueTrigger/BP_WorldObject_Dialogue_Trigger.BP_WorldObject_Dialogue_Trigger_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x349, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldObject_Dialogue_Trigger_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle DialogueToPlay;  // 0x0330, size 0x18
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bHasPlayed;  // 0x0348, size 0x1

    UFUNCTION() void BndEvt__BP_WorldObject_Dialogue_Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_WorldObject_Dialogue_Trigger(int32 EntryPoint);  // parameters 0x4
};

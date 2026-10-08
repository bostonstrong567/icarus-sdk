// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Trigger.BP_TargetRange_Trigger_C
// Derives from: ATargetRangeTrigger > AIcarusActor > AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Trigger_C : public ATargetRangeTrigger
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x02F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_Trigger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_Round_Start();  // named "Multi Round Start"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Round_Start();  // named "Round Start"
};

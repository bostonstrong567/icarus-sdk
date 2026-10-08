// /Game/BP/Quests/Prometheus/Story/Story2/BPQ_PRO_Story2_Investigate_Travel.BPQ_PRO_Story2_Investigate_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story2_Investigate_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* SphereLargerAreaAudio;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle ApproachAreaDialogue;  // 0x0498, size 0x18

    UFUNCTION() void BndEvt__BPQ_PRO_Story2_Investigate_Travel_SphereLargerAreaAudio_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story2_Investigate_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};

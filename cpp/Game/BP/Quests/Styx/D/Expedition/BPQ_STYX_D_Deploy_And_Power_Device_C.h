// /Game/BP/Quests/Styx/D/Expedition/BPQ_STYX_D_Deploy_And_Power_Device.BPQ_STYX_D_Deploy_And_Power_Device_C
// Derives from: ABPQ_Common_Snap_Deploy_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Deploy_And_Power_Device_C : public ABPQ_Common_Snap_Deploy_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Repeating;  // 0x04C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Initial;  // 0x04D8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Deploy_And_Power_Device(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestStarted();
};

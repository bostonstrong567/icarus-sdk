// /Game/BP/Quests/Prometheus/D/Research/BPQ_PRO_D_Research_Aerosol_Deploy_Obj2.BPQ_PRO_D_Research_Aerosol_Deploy_Obj2_C
// Derives from: ABPQ_Common_Snap_Deploy_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Research_Aerosol_Deploy_Obj2_C : public ABPQ_Common_Snap_Deploy_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Research_Aerosol_Deploy_Obj2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeploy(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};

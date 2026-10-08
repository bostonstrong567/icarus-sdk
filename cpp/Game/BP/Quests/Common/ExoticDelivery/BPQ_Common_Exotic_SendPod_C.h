// /Game/BP/Quests/Common/ExoticDelivery/BPQ_Common_Exotic_SendPod.BPQ_Common_Exotic_SendPod_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Exotic_SendPod_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Exotic_SendPod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};

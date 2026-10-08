// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C2/BPQ_GH_IM_C2_Test_Power.BPQ_GH_IM_C2_Test_Power_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C2_Test_Power_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C2_Test_Power(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NetworkComponentActive(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SplineConnection(FIcarusResourcesEnum ResourceType, bool bNewConnected);  // parameters 0x11
};

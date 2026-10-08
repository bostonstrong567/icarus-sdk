// /Game/BP/Quests/GreatHunts/Ape/C/BPQ_GH_Ape_C_Stage_Power_AirCon.BPQ_GH_Ape_C_Stage_Power_AirCon_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C_Stage_Power_AirCon_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable) void AlwaysCheck();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void CheckUnit(FString Name, bool& Active);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void DoCheck();
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C_Stage_Power_AirCon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAC(AIcarusActor*& AC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_D/BPQ_GH_RG_D_Choice_Extract.BPQ_GH_RG_D_Choice_Extract_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_D_Choice_Extract_C : public ABPQ_Common_Craft_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void DeviceCheck(AActor* Device, bool& Success);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_D_Choice_Extract(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};

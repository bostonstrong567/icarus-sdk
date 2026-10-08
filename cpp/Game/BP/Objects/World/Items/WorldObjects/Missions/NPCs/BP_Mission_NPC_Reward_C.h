// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_Reward.BP_Mission_NPC_Reward_C
// Derives from: ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x840, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_Reward_C : public ABP_Mission_NPC_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLocalState;  // 0x07E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle TriggeredFlag;  // 0x07E4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 RewardSeed;  // 0x07FC, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName RewardRow;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FDynamicQuestRewardsRowHandle> Reward;  // 0x0808, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle ClaimedFlag;  // 0x0818, size 0x18
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName RewardRow2;  // 0x0830, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName RewardRow3;  // 0x0838, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_Reward(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixRewardArray();
    UFUNCTION(BlueprintCallable) void GenerateReward(FDynamicQuestRewardsRowHandle& DynamicQuestReward);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GenerateRewardItem(int32 Seed, FDynamicQuestRewardItemsRowHandle QuestRewardItem, FRewardItemEntry& ItemEntry);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetItemsFromSeed(FDynamicQuestRewardsRowHandle Reward, int32 Seed, TArray<FRewardItemEntry>& RewardItems, TArray<bool>& Scale);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void SelectedReward(FDynamicQuestRewardsRowHandle Reward);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SessionFlagUpdated();
};

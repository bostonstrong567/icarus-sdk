// /Game/BP/Objects/World/Delivery/BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C
// Derives from: ABP_Reward_Transport_Pod_C > ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Reward_Transport_Pod_Selection_C : public ABP_Reward_Transport_Pod_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0538, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName Reward1;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName Reward2;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName Reward3;  // 0x0550, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<int32> RewardSeeds;  // 0x0558, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FDynamicQuestRewardsRowHandle> RewardOptions;  // 0x0568, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bRewardGenerated;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bRewardAddedToInventory;  // 0x0581, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bRewardCollected;  // 0x0582, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 RewardSeed1;  // 0x0584, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 RewardSeed2;  // 0x0588, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 RewardSeed3;  // 0x058C, size 0x4

    UFUNCTION(BlueprintCallable) void CheckForRewardCollected();
    UFUNCTION() void ExecuteUbergraph_BP_Reward_Transport_Pod_Selection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateReward(FDynamicQuestRewardsRowHandle& DynamicQuestReward);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GenerateRewardItem(int32 Seed, FDynamicQuestRewardItemsRowHandle QuestRewardItem, FRewardItemEntry& ItemEntry);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GenerateRewards();
    UFUNCTION(BlueprintCallable) void GetItemsFromSeed(FDynamicQuestRewardsRowHandle Reward, int32 Seed, TArray<FRewardItemEntry>& RewardItems, TArray<bool>& Scale);  // parameters 0x40
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void PlayerSelectedReward(FDynamicQuestRewardsRowHandle Reward);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PopulateRewardsArray();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};

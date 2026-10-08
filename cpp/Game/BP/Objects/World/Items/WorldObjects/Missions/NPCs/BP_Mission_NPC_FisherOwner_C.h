// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_FisherOwner.BP_Mission_NPC_FisherOwner_C
// Derives from: ABP_Mission_NPC_Reward_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x899, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_FisherOwner_C : public ABP_Mission_NPC_Reward_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Backpack;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Can;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0858, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Head;  // 0x0860, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x0868, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Arms;  // 0x0870, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Feet;  // 0x0878, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Legs;  // 0x0880, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Chest;  // 0x0888, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishBoardController* FishingController;  // 0x0890, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bContestActive;  // 0x0898, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_FisherOwner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InspectFish(FItemData Fish, APlayerController* Player);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnNPCDataUpdated();
    UFUNCTION(BlueprintCallable) void RegisterDialogueSpeaker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};

// /Game/BP/Quests/Olympus/Omni/Research/BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Omni_OLY_Research_Craft_Weapons_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle Character_Flag;  // 0x0470, size 0x18, named "Character Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Account_Flag;  // 0x0488, size 0x18, named "Account Flag"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Omni_OLY_Research_Craft_Weapons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

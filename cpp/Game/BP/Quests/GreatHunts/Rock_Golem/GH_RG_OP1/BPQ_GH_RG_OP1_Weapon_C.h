// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_OP1/BPQ_GH_RG_OP1_Weapon.BPQ_GH_RG_OP1_Weapon_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_OP1_Weapon_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0470, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0489, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_OP1_Weapon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};

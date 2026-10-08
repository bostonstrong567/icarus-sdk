// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C/BPQ_GH_RG_C_People_2.BPQ_GH_RG_C_People_2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C_People_2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C_People_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};

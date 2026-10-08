// /Game/BP/Quests/Elysium/SideQuests/Igloo/ELY_SQ_Igloo_Setup_Water.ELY_SQ_Igloo_Setup_Water_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class AELY_SQ_Igloo_Setup_Water_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForMeltingIce(AActor* Actor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_ELY_SQ_Igloo_Setup_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};

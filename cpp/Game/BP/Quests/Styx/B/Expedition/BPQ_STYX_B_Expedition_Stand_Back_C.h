// /Game/BP/Quests/Styx/B/Expedition/BPQ_STYX_B_Expedition_Stand_Back.BPQ_STYX_B_Expedition_Stand_Back_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_B_Expedition_Stand_Back_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_LargeCreatureSpawn;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScanInProgress;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x0484, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle Event;  // 0x049C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_B_Expedition_Stand_Back(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};

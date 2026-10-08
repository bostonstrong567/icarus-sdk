// /Game/BP/Quests/Prometheus/Story/Story3/BPQ_PRO_Story3_Triangulate_Scan.BPQ_PRO_Story3_Triangulate_Scan_C
// Derives from: ABPQ_Scan_C > AQuest > AIcarusActor > AActor > UObject
// size 0x57C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story3_Triangulate_Scan_C : public ABPQ_Scan_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_LargeCreatureSpawn;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScanInProgress;  // 0x0518, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x051C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle Event;  // 0x0534, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue4;  // 0x054C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue6;  // 0x0564, size 0x18

    UFUNCTION() void BndEvt__BPQ_PRO_Story3_Triangulate_Scan_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story3_Triangulate_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

// /Game/BP/Quests/Implementations/Bw6_Scan/BP_BW6_Scan_ProgressScan.BP_BW6_Scan_ProgressScan_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Scan_ProgressScan_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxScanTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventTime;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxEventTime;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Snap_Actor_Suffix;  // 0x0498, size 0x10, named "Snap Actor Suffix"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakTime;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakMaxTime;  // 0x04AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x04B0, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriggeredEvent;  // 0x04B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Enemy_Spawn;  // 0x04B8, size 0xC, named "Enemy Spawn"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Ai_Count;  // 0x04D8, size 0x4, named "Ai Count"

    UFUNCTION(BlueprintCallable) void AnimalEventAudio();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Scan_ProgressScan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ScanningStoppedAudio();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAIEvent();
    UFUNCTION(BlueprintCallable) void TriggerBreak();
    UFUNCTION(BlueprintCallable) void TriggerWeatherEvent();
    UFUNCTION(BlueprintCallable) void WeatherEventAudio();
};

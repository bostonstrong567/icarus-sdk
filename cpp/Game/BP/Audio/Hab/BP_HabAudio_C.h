// /Game/BP/Audio/Hab/BP_HabAudio.BP_HabAudio_C
// Derives from: AActor > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HabAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMusicSubsystemConfig MusicConfig;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HabAudioEnabled;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* DioramaAmbience;  // 0x0240, size 0x8

    UFUNCTION(BlueprintCallable) void ClearDioramaAmbience(bool IsEndingPlay);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_HabAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDioramaAmbience(UFMODEvent* FMODEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHabAudioEnabled(bool Enabled);  // parameters 0x1
};

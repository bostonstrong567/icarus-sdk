// /Game/BP/Audio/Title/BP_TitleAudio.BP_TitleAudio_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TitleAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMusicSubsystemConfig MusicConfig;  // 0x0230, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TitleAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

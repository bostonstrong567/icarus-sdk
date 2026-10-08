// /Game/UI/Spectator/BP_SpectatorSaveGame.BP_SpectatorSaveGame_C
// Derives from: USaveGame > UObject
// size 0x2C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SpectatorSaveGame_C : public USaveGame
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset1;  // 0x0028, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset2;  // 0x0078, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset3;  // 0x00C8, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset5;  // 0x0118, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset4;  // 0x0168, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset6;  // 0x01B8, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset7;  // 0x0208, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset8;  // 0x0258, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 Index;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<FText> PresetNames;  // 0x02B0, size 0x10

    UFUNCTION(BlueprintCallable) TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> GetPreset(int32 Index);  // parameters 0x58
    UFUNCTION(BlueprintCallable) FText GetPresetName(int32 Index);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetPreset(int32 Index, TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void SetPresetName(FText PresetName, int32 Index);  // parameters 0x1C
};

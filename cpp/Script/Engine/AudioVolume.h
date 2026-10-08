// /Script/Engine.AudioVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x2C8, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioVolume.h

UCLASS(Config=Engine)
class AAudioVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Priority;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bEnabled : 1;  // 0x025C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FReverbSettings Settings;  // 0x0260, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FInteriorSettings AmbientZoneSettings;  // 0x0280, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;  // 0x02B8, size 0x10

    UFUNCTION() void OnRep_bEnabled();
    UFUNCTION(BlueprintCallable) void SetEnabled(bool bNewEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInteriorSettings(const FInteriorSettings& NewInteriorSettings);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void SetPriority(float NewPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetReverbSettings(const FReverbSettings& NewReverbSettings);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetSubmixOverrideSettings(const TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);  // parameters 0x10

    // Virtual functions that start here:
    //   OnRep_bEnabled
};

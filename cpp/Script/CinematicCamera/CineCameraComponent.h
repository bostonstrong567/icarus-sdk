// /Script/CinematicCamera.CineCameraComponent
// Derives from: UCameraComponent > USceneComponent > UActorComponent > UObject
// size 0x8D0, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

UCLASS(Config=Engine)
class UCineCameraComponent : public UCameraComponent
{
public:
    UPROPERTY(Deprecated) FCameraFilmbackSettings FilmbackSettings;  // 0x07D0, size 0xC
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FCameraFilmbackSettings Filmback;  // 0x07DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCameraLensSettings LensSettings;  // 0x07E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCameraFocusSettings FocusSettings;  // 0x0800, size 0x58
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CurrentFocalLength;  // 0x0858, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CurrentAperture;  // 0x085C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentFocusDistance;  // 0x0860, size 0x4
    UPROPERTY(Config) TArray<FNamedFilmbackPreset> FilmbackPresets;  // 0x0870, size 0x10
    UPROPERTY(Config) TArray<FNamedLensPreset> LensPresets;  // 0x0880, size 0x10
    UPROPERTY(Config, Deprecated) FString DefaultFilmbackPresetName;  // 0x0890, size 0x10
    UPROPERTY(Config) FString DefaultFilmbackPreset;  // 0x08A0, size 0x10
    UPROPERTY(Config) FString DefaultLensPresetName;  // 0x08B0, size 0x10
    UPROPERTY(Config) float DefaultLensFocalLength;  // 0x08C0, size 0x4
    UPROPERTY(Config) float DefaultLensFStop;  // 0x08C4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    float LastFocusDistance;  // 0x0864, protected
    uint8 : 1 bResetInterpolation;  // 0x0868, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetDefaultFilmbackPresetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFilmbackPresetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHorizontalFieldOfView() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetLensPresetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FNamedLensPreset> GetLensPresetsCopy();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetVerticalFieldOfView() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCurrentFocalLength(float InFocalLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFilmbackPresetByName(FString InPresetName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLensPresetByName(FString InPresetName);  // parameters 0x10

    // Virtual functions that start here:
    //   UpdateCameraLens
};

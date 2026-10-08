// /Script/EngineSettings.GameMapsSettings
// Derives from: UObject
// size 0xF0, declared in Engine/Source/Runtime/EngineSettings/Classes/GameMapsSettings.h

UCLASS(Config=Engine)
class UGameMapsSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) FString LocalMapOptions;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath TransitionMap;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, Config) bool bUseSplitscreen;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere, Config) EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;  // 0x0053, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bOffsetPlayerGamepadIds;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, Config) FSoftClassPath GameInstanceClass;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath GameDefaultMap;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath ServerDefaultMap;  // 0x0088, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath GlobalDefaultGameMode;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath GlobalDefaultServerGameMode;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, Config) TArray<FGameModeName> GameModeMapPrefixes;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FGameModeName> GameModeClassAliases;  // 0x00E0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) static UGameMapsSettings* GetGameMapsSettings();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSkipAssigningGamepadToPlayer1() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);  // parameters 0x1
};

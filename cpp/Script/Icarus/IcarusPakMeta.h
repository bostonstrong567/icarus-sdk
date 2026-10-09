// /Script/Icarus.IcarusPakMeta
// Derives from: UObject
// size 0x28, declared in Icarus/Source/Icarus/Utility/IcarusPakMeta.h

UCLASS()
class UIcarusPakMeta : public UObject
{
public:
    UFUNCTION(BlueprintCallable) static FPakMetaDetail CheckGameContentHash(UGameInstance* GameInstance);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) static FString FileDetailsToString(const FPakFileDetails& Details);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool IsPakResultMatch(int32 Bitmask, EMetaHashResult Variable);  // parameters 0x6
    UFUNCTION(BlueprintCallable) static bool ShouldShowPopup();  // parameters 0x1
};

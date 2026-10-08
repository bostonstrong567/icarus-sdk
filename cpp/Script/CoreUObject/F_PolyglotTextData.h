// /Script/CoreUObject.PolyglotTextData
// size 0xB8, declared in Engine/Source/Runtime/Core/Public/Internationalization/PolyglotTextData.h

USTRUCT()
struct FPolyglotTextData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELocalizedTextSourceCategory Category;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NativeCulture;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Namespace;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Key;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NativeString;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FString> LocalizedStrings;  // 0x0048, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsMinimalPatch;  // 0x0098, size 0x1
    UPROPERTY(Transient) FText CachedText;  // 0x00A0, size 0x18
};

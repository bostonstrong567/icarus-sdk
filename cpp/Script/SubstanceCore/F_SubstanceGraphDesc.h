// /Script/SubstanceCore.SubstanceGraphDesc
// size 0x78, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceInstanceFactory.h

USTRUCT()
struct FSubstanceGraphDesc
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Index;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Label;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Description;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Category;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Keywords;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Author;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString AuthorUrl;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString UserTag;  // 0x0068, size 0x10
};

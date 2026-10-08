// /Script/Engine.BookMark
// Derives from: UBookmarkBase > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/BookMark.h

UCLASS(MinimalAPI)
class UBookMark : public UBookmarkBase
{
public:
    UPROPERTY(EditAnywhere) FVector Location;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere) TArray<FString> HiddenLevels;  // 0x0040, size 0x10
};

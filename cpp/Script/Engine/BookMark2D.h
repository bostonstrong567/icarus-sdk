// /Script/Engine.BookMark2D
// Derives from: UBookmarkBase > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/BookMark2D.h

UCLASS()
class UBookMark2D : public UBookmarkBase
{
public:
    UPROPERTY(EditAnywhere) float Zoom2D;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) FIntPoint Location;  // 0x002C, size 0x8
};

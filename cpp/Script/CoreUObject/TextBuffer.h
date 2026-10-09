// /Script/CoreUObject.TextBuffer
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/CoreUObject/Public/Misc/TextBuffer.h

UCLASS()
class UTextBuffer : public UObject
{
private:
    int32 Pos;  // 0x0038, not reflected
    int32 Top;  // 0x003C, not reflected
    FString Text;  // 0x0040, not reflected
};

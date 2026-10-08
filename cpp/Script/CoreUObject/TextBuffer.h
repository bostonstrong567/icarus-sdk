// /Script/CoreUObject.TextBuffer
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/CoreUObject/Public/Misc/TextBuffer.h

UCLASS()
class UTextBuffer : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 Pos;  // 0x0038, private
    int32 Top;  // 0x003C, private
    FString Text;  // 0x0040, private
};

// /Script/Engine.ExposedValueCopyRecord
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h

USTRUCT()
struct FExposedValueCopyRecord
{
public:
    UPROPERTY() int32 CopyIndex;  // 0x0000, size 0x4
    UPROPERTY() EPostCopyOperation PostCopyOperation;  // 0x0004, size 0x1
};

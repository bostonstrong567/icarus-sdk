// /Script/Engine.MaterialAttributesInput
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/MaterialExpressionIO.h

USTRUCT()
struct FMaterialAttributesInput : public FExpressionInput
{
public:
    UPROPERTY(Transient) int32 PropertyConnectedBitmask;  // 0x0014, size 0x4
};

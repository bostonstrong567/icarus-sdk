// /Script/CoreUObject.Function
// Derives from: UStruct > UField > UObject
// size 0xE0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UFunction : public UStruct
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EFunctionFlags FunctionFlags;  // 0x00B0
    uint8 NumParms;  // 0x00B4
    uint16 ParmsSize;  // 0x00B6
    uint16 ReturnValueOffset;  // 0x00B8
    uint16 RPCId;  // 0x00BA
    uint16 RPCResponseId;  // 0x00BC
    FProperty * FirstPropertyToInit;  // 0x00C0
    UFunction * EventGraphFunction;  // 0x00C8
    int32 EventGraphCallOffset;  // 0x00D0
    void (*)(UObject *, FFrame &, void * const) Func;  // 0x00D8, private
};

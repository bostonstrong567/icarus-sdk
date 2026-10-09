// /Script/CoreUObject.Function
// Derives from: UStruct > UField > UObject
// size 0xE0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UFunction : public UStruct
{
public:
    EFunctionFlags FunctionFlags;  // 0x00B0, not reflected
    uint8 NumParms;  // 0x00B4, not reflected
    uint16 ParmsSize;  // 0x00B6, not reflected
    uint16 ReturnValueOffset;  // 0x00B8, not reflected
    uint16 RPCId;  // 0x00BA, not reflected
    uint16 RPCResponseId;  // 0x00BC, not reflected
    FProperty * FirstPropertyToInit;  // 0x00C0, not reflected
    UFunction * EventGraphFunction;  // 0x00C8, not reflected
    int32 EventGraphCallOffset;  // 0x00D0, not reflected
private:
    void (*)(UObject *, FFrame &, void * const) Func;  // 0x00D8, not reflected
};

// /Script/CoreUObject.ScriptStruct
// Derives from: UStruct > UField > UObject
// size 0xC0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UScriptStruct : public UStruct
{
public:
    EStructFlags StructFlags;  // 0x00B0, not reflected
protected:
    bool bPrepareCppStructOpsCompleted;  // 0x00B4, not reflected
    UScriptStruct::ICppStructOps * CppStructOps;  // 0x00B8, not reflected

    // Virtual functions that start here:
    //   GetCustomGuid, GetStructCPPName, GetStructTypeHash, InitializeDefaultValue, PrepareCppStructOps
    //   RecursivelyPreload
};

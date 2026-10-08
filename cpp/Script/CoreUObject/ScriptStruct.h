// /Script/CoreUObject.ScriptStruct
// Derives from: UStruct > UField > UObject
// size 0xC0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UScriptStruct : public UStruct
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EStructFlags StructFlags;  // 0x00B0
    bool bPrepareCppStructOpsCompleted;  // 0x00B4, protected
    UScriptStruct::ICppStructOps * CppStructOps;  // 0x00B8, protected

    // Virtual functions that start here:
    //   GetCustomGuid, GetStructCPPName, GetStructTypeHash, InitializeDefaultValue, PrepareCppStructOps
    //   RecursivelyPreload
};

// /Script/CoreUObject.Enum
// Derives from: UField > UObject
// size 0x60, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UEnum : public UField
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FString CppType;  // 0x0030
    TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32> > Names;  // 0x0040, protected
    UEnum::ECppForm CppForm;  // 0x0050, protected
    EEnumFlags EnumFlags;  // 0x0054, protected
    FText (*)(int32) EnumDisplayNameFn;  // 0x0058, protected

    // Virtual functions that start here:
    //   GenerateFullEnumName, GetAuthoredNameStringByIndex, GetDisplayNameTextByIndex, ResolveEnumerator
    //   SetEnums
};

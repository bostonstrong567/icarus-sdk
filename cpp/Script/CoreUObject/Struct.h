// /Script/CoreUObject.Struct
// Derives from: UField > UObject
// size 0xB0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UStruct : public UField
{
public:
    UField * Children;  // 0x0048, not reflected
    FField * ChildProperties;  // 0x0050, not reflected
    int32 PropertiesSize;  // 0x0058, not reflected
    int32 MinAlignment;  // 0x005C, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > Script;  // 0x0060, not reflected
    FProperty * PropertyLink;  // 0x0070, not reflected
    FProperty * RefLink;  // 0x0078, not reflected
    FProperty * DestructorLink;  // 0x0080, not reflected
    FProperty * PostConstructLink;  // 0x0088, not reflected
    TArray<UObject *,TSizedDefaultAllocator<32> > ScriptAndPropertyObjectReferences;  // 0x0090, not reflected
    TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32> > * UnresolvedScriptProperties;  // 0x00A0, not reflected
    const FUnversionedStructSchema * UnversionedSchema;  // 0x00A8, not reflected
private:
    UStruct * SuperStruct;  // 0x0040, not reflected

    // Virtual functions that start here:
    //   ArePropertyGuidsAvailable, CustomFindProperty, DestroyStruct, FindPropertyGuidFromName
    //   FindPropertyNameFromGuid, GetAuthoredNameForField, GetInheritanceSuper, GetPrefixCPP
    //   InitializeStruct, IsStructTrashed, Link, PropertyNameToDisplayName, SerializeBin, SerializeExpr
    //   SerializeTaggedProperties, SetSuperStruct
};

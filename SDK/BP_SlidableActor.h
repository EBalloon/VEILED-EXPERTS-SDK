// BlueprintGeneratedClass BP_SlidableActor.BP_SlidableActor_C
class ABP_SlidableActor_C : public APDSlidableActor {

public:

	struct UStaticMeshComponent StaticMesh; // 0x248 (8)
	struct FLinearColor NewVar_1; // 0x250 (16)

	void UserConstructionScript(); // Function BP_SlidableActor.BP_SlidableActor_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function BP_SlidableActor.BP_SlidableActor_C.UserConstructionScript
inline void ABP_SlidableActor_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlidableActor.BP_SlidableActor_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

